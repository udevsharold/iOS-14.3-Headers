/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:40 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class ATXScreenLogUnlockSession, NSMutableArray;

@interface ATXHomeScreenLogUnlockSessionManager : NSObject <NSSecureCoding> {

	BOOL _isInSession;
	ATXScreenLogUnlockSession* _currentSession;
	NSMutableArray* _completedSessions;

}

@property (assign,nonatomic) BOOL isInSession;                                        //@synthesize isInSession=_isInSession - In the implementation block
@property (nonatomic,retain) ATXScreenLogUnlockSession * currentSession;              //@synthesize currentSession=_currentSession - In the implementation block
@property (nonatomic,retain) NSMutableArray * completedSessions;                      //@synthesize completedSessions=_completedSessions - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)currentSettings;
+(id)_currentSettings;
-(ATXScreenLogUnlockSession *)currentSession;
-(id)init;
-(void)setCurrentSession:(ATXScreenLogUnlockSession *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isInSession;
-(id)summarizeCompletedSessions;
-(long long)updateSessionStateWithUIEvent:(id)arg1 ;
-(id)initWithIsInSession:(BOOL)arg1 currentSession:(id)arg2 completedSessions:(id)arg3 ;
-(long long)_eventStatusWithUIEvent:(id)arg1 ;
-(void)_updateCurrentSessionWithUIEvent:(id)arg1 eventStatus:(long long)arg2 ;
-(BOOL)isEqualToATXHomeScreenLogUnlockSessionManager:(id)arg1 ;
-(id)removeCompletedSessions;
-(void)setIsInSession:(BOOL)arg1 ;
-(NSMutableArray *)completedSessions;
-(void)setCompletedSessions:(NSMutableArray *)arg1 ;
@end

