/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:03 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSNumber, NSString, NSData;


@protocol HMDSettingConstraintModelProtocol <HMDSettingModelBaseProtocol>
@property (nonatomic,copy) NSNumber * type; 
@property (nonatomic,copy) NSNumber * numberValue; 
@property (nonatomic,copy) NSString * stringValue; 
@property (nonatomic,copy) NSData * dataValue; 
@required
-(void)setDataValue:(id)arg1;
-(void)setStringValue:(id)arg1;
-(void)setType:(id)arg1;
-(NSString *)stringValue;
-(void)setNumberValue:(id)arg1;
-(NSNumber *)numberValue;
-(NSData *)dataValue;
-(NSNumber *)type;

@end
