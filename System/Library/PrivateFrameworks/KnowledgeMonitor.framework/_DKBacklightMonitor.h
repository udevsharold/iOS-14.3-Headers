/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:10 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/KnowledgeMonitor.framework/KnowledgeMonitor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <KnowledgeMonitor/_DKMonitor.h>

@interface _DKBacklightMonitor : _DKMonitor {

	int notifyToken;

}
+(id)eventStream;
+(id)entitlements;
+(void)setIsBacklit:(BOOL)arg1 ;
+(id)_eventWithState:(id)arg1 ;
+(BOOL)shouldMergeUnchangedEvents;
+(BOOL)indicatesScreenOnWithNotificationState:(id)arg1 ;
-(void)dealloc;
-(void)obtainCurrentValue;
-(void)deactivate;
-(void)synchronouslyReflectCurrentValue;
-(void)start;
-(void)stop;
@end

