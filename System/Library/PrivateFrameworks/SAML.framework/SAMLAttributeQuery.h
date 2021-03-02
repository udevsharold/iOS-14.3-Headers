/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:38 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SAML.framework/SAML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAML/XMLWrapperDoc.h>

@class NSData, SAMLAttributeQueryElement, NSString;

@interface SAMLAttributeQuery : XMLWrapperDoc {

	NSData* _schemaData;
	SAMLAttributeQueryElement* _requestElement;

}

@property (nonatomic,retain) SAMLAttributeQueryElement * requestElement;              //@synthesize requestElement=_requestElement - In the implementation block
@property (nonatomic,readonly) NSString * channelId; 
-(void)addAttribute:(id)arg1 ;
-(NSString *)channelId;
-(id)initWithData:(id)arg1 schema:(id)arg2 error:(id*)arg3 ;
-(id)initWithElement:(id)arg1 schema:(id)arg2 error:(id*)arg3 ;
-(SAMLAttributeQueryElement *)requestElement;
-(void)setSubjectFromResponse:(id)arg1 ;
-(void)setRequestElement:(SAMLAttributeQueryElement *)arg1 ;
-(void)addAttribute:(id)arg1 values:(id)arg2 ;
@end
