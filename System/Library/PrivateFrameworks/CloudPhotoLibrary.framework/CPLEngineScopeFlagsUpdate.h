/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:47 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface CPLEngineScopeFlagsUpdate : NSObject {

	long long _flags;
	long long _updatedFlagsMask;

}

@property (nonatomic,readonly) long long updatedFlagsMask;              //@synthesize updatedFlagsMask=_updatedFlagsMask - In the implementation block
@property (nonatomic,readonly) long long flags;                         //@synthesize flags=_flags - In the implementation block
@property (nonatomic,readonly) BOOL hasFlagUpdates; 
@property (nonatomic,readonly) NSArray * arrayDescription; 
+(id)_arrayDescriptionForFlags:(long long)arg1 remainingFlags:(long long*)arg2 ;
+(id)flagsDescriptionMapping;
+(id)descriptionForFlags:(long long)arg1 ;
-(id)init;
-(id)initWithFlags:(long long)arg1 ;
-(id)description;
-(long long)flags;
-(id)redactedDescription;
-(BOOL)valueForFlag:(long long)arg1 ;
-(void)setValue:(BOOL)arg1 forFlag:(long long)arg2 ;
-(void)updateFlags:(long long)arg1 withFlagsValue:(long long)arg2 ;
-(void)updateFlags:(id)arg1 ;
-(long long)updatedFlagsFromFlags:(long long)arg1 ;
-(BOOL)hasFlagUpdates;
-(NSArray *)arrayDescription;
-(long long)updatedFlagsMask;
@end

