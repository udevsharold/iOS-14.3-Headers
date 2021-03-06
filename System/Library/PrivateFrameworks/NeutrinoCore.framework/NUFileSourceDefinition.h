/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:12 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NeutrinoCore/NUSingleSourceDefinition.h>

@class NSURL, NSString;

@interface NUFileSourceDefinition : NUSingleSourceDefinition {

	BOOL _useEmbeddedPreview;
	NSURL* _url;
	NSString* _uti;

}

@property (readonly) NSURL * url;                                  //@synthesize url=_url - In the implementation block
@property (readonly) NSString * uti;                               //@synthesize uti=_uti - In the implementation block
@property (assign,nonatomic) BOOL useEmbeddedPreview;              //@synthesize useEmbeddedPreview=_useEmbeddedPreview - In the implementation block
-(NSString *)uti;
-(id)init;
-(long long)mediaType;
-(BOOL)useEmbeddedPreview;
-(id)description;
-(NSURL *)url;
-(id)generateSourceNodeWithIdentifier:(id)arg1 error:(out id*)arg2 ;
-(id)initWithURL:(id)arg1 UTI:(id)arg2 ;
-(void)setUseEmbeddedPreview:(BOOL)arg1 ;
@end

