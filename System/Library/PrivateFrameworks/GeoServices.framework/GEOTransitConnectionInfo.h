/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:23 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSArray, NSURL;


@protocol GEOTransitConnectionInfo <NSObject>
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSArray * labelItems; 
@property (nonatomic,readonly) NSURL * urlToOpen; 
@property (nonatomic,readonly) unsigned long long muid; 
@property (nonatomic,readonly) int providerID; 
@required
-(unsigned long long)muid;
-(NSArray *)labelItems;
-(int)providerID;
-(NSString *)name;
-(NSURL *)urlToOpen;

@end
