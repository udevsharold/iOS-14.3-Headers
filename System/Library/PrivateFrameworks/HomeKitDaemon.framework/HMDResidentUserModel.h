/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:07 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDUserModel.h>

@class NSString, HMDDevice, NSNumber;

@interface HMDResidentUserModel : HMDUserModel {

	NSString* _displayName;

}

@property (nonatomic,retain) HMDDevice * device; 
@property (nonatomic,retain) NSNumber * configState; 
@property (nonatomic,retain) NSString * displayName;                   //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,retain) NSString * deviceIdentifier; 
+(id)properties;
-(void)setDisplayName:(NSString *)arg1 ;
-(NSString *)displayName;
@end
