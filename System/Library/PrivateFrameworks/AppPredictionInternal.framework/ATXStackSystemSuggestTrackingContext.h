/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:41 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class ATXStackRotationSessionManager, NSMutableArray;

@interface ATXStackSystemSuggestTrackingContext : NSObject <NSSecureCoding> {

	ATXStackRotationSessionManager* _sessionManager;
	NSMutableArray* _systemSuggestBlendingCaches;

}

@property (nonatomic,readonly) ATXStackRotationSessionManager * sessionManager;              //@synthesize sessionManager=_sessionManager - In the implementation block
@property (nonatomic,readonly) NSMutableArray * systemSuggestBlendingCaches;                 //@synthesize systemSuggestBlendingCaches=_systemSuggestBlendingCaches - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(ATXStackRotationSessionManager *)sessionManager;
-(void)encodeWithCoder:(id)arg1 ;
-(void)updateWithClientModelCacheUpdate:(id)arg1 ;
-(void)updateWithBlendingUICacheUpdate:(id)arg1 ;
-(void)updateWithUIEvent:(id)arg1 ;
-(id)removeAllAndReturnCompletedSystemSuggestSessions;
-(id)initWithRotationSessionManager:(id)arg1 systemSuggestBlendingCaches:(id)arg2 ;
-(BOOL)isEqualToATXStackSystemSuggestTrackingContext:(id)arg1 ;
-(id)blendingCacheWithUUID:(id)arg1 ;
-(NSMutableArray *)systemSuggestBlendingCaches;
@end
