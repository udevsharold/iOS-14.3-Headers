/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:56 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BaseBoard/BSAction.h>

@class NSString;

@interface SBSUIInCallDestroySceneAction : BSAction

@property (nonatomic,copy,readonly) NSString * analyticsSource; 
@property (nonatomic,readonly) long long destructionReason; 
-(id)keyDescriptionForSetting:(unsigned long long)arg1 ;
-(id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3 ;
-(NSString *)analyticsSource;
-(id)initWithDestructionReason:(long long)arg1 analyticsSource:(id)arg2 timeout:(double)arg3 withResponseHandler:(/*^block*/id)arg4 ;
-(long long)destructionReason;
@end

