/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:50 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WFParameterState <NSCopying,WFVariableSerialization>
@optional
+(Class)processingValueClass;
+(id)processingValueClasses;
-(id)initWithVariable:(id)arg1;
-(id)legacySerializedRepresentation;

@required
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1;
-(id)containedVariables;
-(void)processWithContext:(id)arg1 userInputRequiredHandler:(/*^block*/id)arg2 valueHandler:(/*^block*/id)arg3;

@end

