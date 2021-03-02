/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:19:16 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface VKLabelExternalTextElement : NSObject <NSSecureCoding> {

	LabelExternalTextElement* _element;

}
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(const LabelExternalTextElement*)element;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithTextElement:(const LabelExternalTextElement*)arg1 ;
@end
