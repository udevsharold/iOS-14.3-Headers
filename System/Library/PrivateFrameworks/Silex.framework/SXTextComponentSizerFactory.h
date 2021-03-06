/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:43 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SXComponentSizerFactory.h>

@protocol SXDOMObjectProviding, SXTextComponentLayoutHosting, SXTextSourceFactory;
@class NSString;

@interface SXTextComponentSizerFactory : NSObject <SXComponentSizerFactory> {

	id<SXDOMObjectProviding> _DOMObjectProvider;
	id<SXTextComponentLayoutHosting> _textComponentLayoutHosting;
	id<SXTextSourceFactory> _textSourceFactory;

}

@property (nonatomic,readonly) id<SXDOMObjectProviding> DOMObjectProvider;                               //@synthesize DOMObjectProvider=_DOMObjectProvider - In the implementation block
@property (nonatomic,readonly) id<SXTextComponentLayoutHosting> textComponentLayoutHosting;              //@synthesize textComponentLayoutHosting=_textComponentLayoutHosting - In the implementation block
@property (nonatomic,readonly) id<SXTextSourceFactory> textSourceFactory;                                //@synthesize textSourceFactory=_textSourceFactory - In the implementation block
@property (nonatomic,readonly) NSString * type; 
@property (nonatomic,readonly) int role; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(int)role;
-(id<SXDOMObjectProviding>)DOMObjectProvider;
-(id)initWithDOMObjectProvider:(id)arg1 textComponentLayoutHosting:(id)arg2 textSourceFactory:(id)arg3 ;
-(id)sizerForComponent:(id)arg1 componentLayout:(id)arg2 layoutOptions:(id)arg3 DOMObjectProvider:(id)arg4 ;
-(NSString *)type;
-(id<SXTextComponentLayoutHosting>)textComponentLayoutHosting;
-(id<SXTextSourceFactory>)textSourceFactory;
@end

