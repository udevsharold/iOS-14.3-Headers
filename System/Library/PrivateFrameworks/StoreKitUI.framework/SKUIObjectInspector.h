/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:47 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol SKUIObjectInspector <NSObject>
@property (nonatomic,copy) NSString * friendlyName; 
@property (nonatomic,copy) NSString * information; 
@required
-(void)setFriendlyName:(id)arg1;
-(void)setInformation:(id)arg1;
-(NSString *)information;
-(NSString *)friendlyName;
-(void)beginSectionWithFriendlyName:(id)arg1;
-(void)exposePropertyWithFriendlyName:(id)arg1 value:(id)arg2;
-(void)endSection;

@end

