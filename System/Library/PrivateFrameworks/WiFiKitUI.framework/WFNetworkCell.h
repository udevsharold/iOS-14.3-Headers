/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:09:12 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/WiFiKitUI.framework/WiFiKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, WFHotspotDetails;


@protocol WFNetworkCell <NSObject>
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * subtitle; 
@property (assign,nonatomic) BOOL secure; 
@property (assign,nonatomic) long long state; 
@property (assign,nonatomic) unsigned long long bars; 
@property (assign,nonatomic) BOOL personalHotspot; 
@property (nonatomic,retain) WFHotspotDetails * hotspotDetails; 
@property (assign,nonatomic) BOOL connectionError; 
@required
-(unsigned long long)bars;
-(void)setSecure:(BOOL)arg1;
-(BOOL)secure;
-(NSString *)subtitle;
-(long long)state;
-(void)setPersonalHotspot:(BOOL)arg1;
-(void)setSubtitle:(id)arg1;
-(void)setBars:(unsigned long long)arg1;
-(void)setTitle:(id)arg1;
-(void)setConnectionError:(BOOL)arg1;
-(BOOL)connectionError;
-(NSString *)title;
-(void)setState:(long long)arg1;
-(WFHotspotDetails *)hotspotDetails;
-(void)setHotspotDetails:(id)arg1;
-(BOOL)personalHotspot;

@end

