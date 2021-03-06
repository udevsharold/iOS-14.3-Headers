/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:07 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EmbeddedAcousticRecognition/EmbeddedAcousticRecognition-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface _EARSpeechRecognition : NSObject <NSCopying> {

	NSArray* _tokenSausage;
	NSArray* _interpretationIndices;

}

@property (nonatomic,copy,readonly) NSArray * tokenSausage;                       //@synthesize tokenSausage=_tokenSausage - In the implementation block
@property (nonatomic,copy,readonly) NSArray * interpretationIndices;              //@synthesize interpretationIndices=_interpretationIndices - In the implementation block
-(NSArray *)tokenSausage;
-(NSArray *)interpretationIndices;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)nBest;
-(unsigned long long)hash;
-(id)description;
-(id)oneBest;
-(BOOL)isEqual:(id)arg1 ;
-(id)_initWithTokenPhraseChoiceList:(const pair<std::__1::vector<std::__1::vector<unsigned int, std::__1::allocator<unsigned int> >, std::__1::allocator<std::__1::vector<unsigned int, std::__1::allocator<unsigned int> > > >, std::__1::vector<std::__1::vector<std::__1::vector<quasar::Token, std::__1::allocator<quasar::Token> >, std::__1::allocator<std::__1::vector<quasar::Token, std::__1::allocator<quasar::Token> > > >, std::__1::allocator<std::__1::vector<std::__1::vector<quasar::Token, std::__1::allocator<quasar::Token> >, std::__1::allocator<std::__1::vector<quasar::Token, std::__1::allocator<quasar::Token> > > > > > >*)arg1 ;
-(id)_initWithTokenSausage:(id)arg1 interpretationIndices:(id)arg2 ;
-(pair<std::__1::vector<std::__1::vector<unsigned int, std::__1::allocator<unsigned int> >, std::__1::allocator<std::__1::vector<unsigned int, std::__1::allocator<unsigned int> > > >, std::__1::vector<std::__1::vector<std::__1::vector<quasar::Token, std::__1::allocator<quasar::Token> >, std::__1::allocator<std::__1::vector<quasar::Token, std::__1::allocator<quasar::Token> > > >, std::__1::allocator<std::__1::vector<std::__1::vector<quasar::Token, std::__1::allocator<quasar::Token> >, std::__1::allocator<std::__1::vector<quasar::Token, std::__1::allocator<quasar::Token> > > > > > >*)_tokenPhraseChoiceList;
-(id)_initWithNBestList:(const vector<std::__1::vector<quasar::Token, std::__1::allocator<quasar::Token> >, std::__1::allocator<std::__1::vector<quasar::Token, std::__1::allocator<quasar::Token> > > >*)arg1 useHatText:(BOOL)arg2 ;
-(id)granularizedRecognition;
@end

