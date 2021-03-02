/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:51 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class WFContentCollection;

@interface WFConditionalSubjectValue : NSObject <NSSecureCoding> {

	BOOL _caseInsensitive;
	WFContentCollection* _content;
	long long _contentType;
	unsigned long long _comparableTimeUnits;

}

@property (nonatomic,readonly) WFContentCollection * content;                              //@synthesize content=_content - In the implementation block
@property (nonatomic,readonly) long long contentType;                                      //@synthesize contentType=_contentType - In the implementation block
@property (getter=isCaseInsensitive,nonatomic,readonly) BOOL caseInsensitive;              //@synthesize caseInsensitive=_caseInsensitive - In the implementation block
@property (nonatomic,readonly) unsigned long long comparableTimeUnits;                     //@synthesize comparableTimeUnits=_comparableTimeUnits - In the implementation block
+(BOOL)supportsSecureCoding;
-(WFContentCollection *)content;
-(long long)contentType;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithContent:(id)arg1 contentType:(long long)arg2 caseInsensitive:(BOOL)arg3 comparableTimeUnits:(unsigned long long)arg4 ;
-(BOOL)isCaseInsensitive;
-(unsigned long long)comparableTimeUnits;
@end
