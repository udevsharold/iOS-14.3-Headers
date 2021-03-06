/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:38 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SAML.framework/SAML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SAML/SAML-Structs.h>
@class NSString;

@interface XMLWrapperNamespace : NSObject {

	xmlNs* _xmlNs;
	NSString* _href;
	NSString* _prefix;

}

@property (nonatomic,retain) NSString * href;                //@synthesize href=_href - In the implementation block
@property (nonatomic,retain) NSString * prefix;              //@synthesize prefix=_prefix - In the implementation block
-(NSString *)href;
-(NSString *)prefix;
-(void)setHref:(NSString *)arg1 ;
-(void)setPrefix:(NSString *)arg1 ;
-(id)initWithNsNode:(xmlNs*)arg1 error:(id*)arg2 ;
-(xmlNs*)xmlNsForNode:(xmlNode*)arg1 error:(id*)arg2 ;
@end

