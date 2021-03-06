/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:26 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@interface _NSAttributedStringGrammar : NSObject <NSCopying, NSMutableCopying> {

	long long _aspect;
	long long _deictic;
	long long _determinationType;
	long long _gender;
	long long _grammaticalCase;
	long long _mood;
	long long _number;
	long long _person;
	long long _position;
	long long _tense;
	long long _verbForm;

}

@property (getter=_wordAttributes,readonly) SCD_Struct_NS30 _wordAttributes; 
@property (assign) long long aspect;                                                      //@synthesize aspect=_aspect - In the implementation block
@property (assign) long long deictic;                                                     //@synthesize deictic=_deictic - In the implementation block
@property (assign) long long determinationType;                                           //@synthesize determinationType=_determinationType - In the implementation block
@property (assign) long long gender;                                                      //@synthesize gender=_gender - In the implementation block
@property (assign) long long grammaticalCase;                                             //@synthesize grammaticalCase=_grammaticalCase - In the implementation block
@property (assign) long long mood;                                                        //@synthesize mood=_mood - In the implementation block
@property (assign) long long number;                                                      //@synthesize number=_number - In the implementation block
@property (assign) long long person;                                                      //@synthesize person=_person - In the implementation block
@property (assign) long long position;                                                    //@synthesize position=_position - In the implementation block
@property (assign) long long tense;                                                       //@synthesize tense=_tense - In the implementation block
@property (assign) long long verbForm;                                                    //@synthesize verbForm=_verbForm - In the implementation block
+(id)identityGrammar;
-(long long)gender;
-(long long)mood;
-(long long)aspect;
-(long long)tense;
-(long long)deictic;
-(void)setNumber:(long long)arg1 ;
-(long long)verbForm;
-(void)setMood:(long long)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)number;
-(void)setTense:(long long)arg1 ;
-(long long)person;
-(void)setAspect:(long long)arg1 ;
-(void)setDeictic:(long long)arg1 ;
-(id)_initWithMarkupDictionary:(id)arg1 ;
-(void)setVerbForm:(long long)arg1 ;
-(unsigned long long)hash;
-(SCD_Struct_NS30)_wordAttributes;
-(long long)grammaticalCase;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)setGender:(long long)arg1 ;
-(long long)determinationType;
-(BOOL)isEqual:(id)arg1 ;
-(void)setDeterminationType:(long long)arg1 ;
-(void)setGrammaticalCase:(long long)arg1 ;
-(long long)position;
-(void)setPerson:(long long)arg1 ;
-(void)setPosition:(long long)arg1 ;
@end

