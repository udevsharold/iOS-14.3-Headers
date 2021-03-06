/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:51 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WFAction.h>

@class WFContentProperty;

@interface WFContentItemAction : WFAction {

	WFContentProperty* _defaultProperty;

}

@property (nonatomic,readonly) Class contentItemClass; 
@property (nonatomic,readonly) WFContentProperty * defaultProperty;              //@synthesize defaultProperty=_defaultProperty - In the implementation block
-(id)description;
-(Class)contentItemClass;
-(id)initWithIdentifier:(id)arg1 definition:(id)arg2 serializedParameters:(id)arg3 ;
-(id)inputContentClasses;
-(BOOL)outputsMultipleItems;
-(WFContentProperty *)defaultProperty;
-(BOOL)inputsMultipleItems;
@end

