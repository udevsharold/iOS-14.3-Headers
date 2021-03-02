/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:52 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WFDialogResponse.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface WFInputTextDialogResponse : WFDialogResponse <NSSecureCoding> {

	NSString* _inputtedText;

}

@property (nonatomic,copy,readonly) NSString * inputtedText;              //@synthesize inputtedText=_inputtedText - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithInputtedText:(id)arg1 cancelled:(BOOL)arg2 ;
-(NSString *)inputtedText;
@end
