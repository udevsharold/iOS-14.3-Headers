/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:28 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RunningBoard/RunningBoard-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class RBProcess, RBSProcessIdentity, NSString;

@interface RBConcreteTarget : NSObject <NSCopying>

@property (nonatomic,readonly) RBProcess * process; 
@property (nonatomic,copy,readonly) RBSProcessIdentity * identity; 
@property (nonatomic,copy,readonly) NSString * environment; 
@property (getter=isSystem,nonatomic,readonly) BOOL system; 
+(id)targetWithIdentity:(id)arg1 environment:(id)arg2 ;
+(id)systemTarget;
+(id)targetWithProcess:(id)arg1 environment:(id)arg2 ;
-(BOOL)isSystem;
-(id)createRBSTarget;
-(id)copyWithZone:(NSZone*)arg1 ;
-(RBSProcessIdentity *)identity;
-(RBProcess *)process;
-(id)description;
-(NSString *)environment;
@end

