/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:52 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/TrialProto.framework/TrialProto
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TrialProto/TRIPBMessage.h>

@class NSString, NSMutableArray;

@interface TRINamespaceInfo : TRIPBMessage

@property (nonatomic,copy) NSString * namespaceId; 
@property (assign,nonatomic) BOOL hasNamespaceId; 
@property (assign,nonatomic) int projectOwner; 
@property (assign,nonatomic) BOOL hasProjectOwner; 
@property (assign,nonatomic) int deploymentEnvironment; 
@property (assign,nonatomic) BOOL hasDeploymentEnvironment; 
@property (assign,nonatomic) BOOL isServerCoordinated; 
@property (assign,nonatomic) BOOL hasIsServerCoordinated; 
@property (nonatomic,retain) NSMutableArray * compatibilityVersionArray; 
@property (nonatomic,readonly) unsigned long long compatibilityVersionArray_Count; 
+(id)descriptor;
@end
