/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:11 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class FBApplicationProcess, FBProcessState, NSString;

@interface SBApplicationProcessState : NSObject <BSDescriptionProviding> {

	FBApplicationProcess* _process;
	FBProcessState* _processState;
	BOOL _isBeingDebugged;

}

@property (nonatomic,readonly) int pid; 
@property (getter=isRunning,nonatomic,readonly) BOOL running; 
@property (getter=isForeground,nonatomic,readonly) BOOL foreground; 
@property (nonatomic,readonly) long long taskState; 
@property (nonatomic,readonly) long long visibility; 
@property (nonatomic,readonly) BOOL isBeingDebugged; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isRunning;
-(long long)visibility;
-(BOOL)isForeground;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(int)pid;
-(BOOL)isBeingDebugged;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(long long)taskState;
-(id)succinctDescriptionBuilder;
-(BOOL)isEqual:(id)arg1 ;
-(id)_initWithProcess:(id)arg1 stateSnapshot:(id)arg2 ;
@end
