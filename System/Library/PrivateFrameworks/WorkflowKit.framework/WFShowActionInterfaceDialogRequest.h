/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:52 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WFDialogRequest.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDictionary;

@interface WFShowActionInterfaceDialogRequest : WFDialogRequest <NSSecureCoding> {

	NSString* _actionClassName;
	NSDictionary* _classNamesByType;

}

@property (nonatomic,copy,readonly) NSString * actionClassName;                   //@synthesize actionClassName=_actionClassName - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * classNamesByType;              //@synthesize classNamesByType=_classNamesByType - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithActionClassName:(id)arg1 classNamesByType:(id)arg2 attribution:(id)arg3 ;
-(NSString *)actionClassName;
-(NSDictionary *)classNamesByType;
@end
