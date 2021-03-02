/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:41 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class NSArray, NSString;

@interface UIDictationMultilingualResults : NSObject {

	NSArray* _phrases;
	NSString* _dominantLanguage;

}

@property (nonatomic,copy) NSArray * phrases;                        //@synthesize phrases=_phrases - In the implementation block
@property (nonatomic,copy) NSString * dominantLanguage;              //@synthesize dominantLanguage=_dominantLanguage - In the implementation block
-(NSArray *)phrases;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPhrases:(NSArray *)arg1 ;
-(void)setDominantLanguage:(NSString *)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)dominantLanguage;
-(id)initWithPhrases:(id)arg1 dominantLanguage:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
@end
