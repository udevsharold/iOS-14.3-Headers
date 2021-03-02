/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:38 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface PSIWordEmbeddingMatch : NSObject <NSSecureCoding> {

	NSString* _word;
	NSString* _extendedWord;
	double _score;

}

@property (readonly) NSString * word;                      //@synthesize word=_word - In the implementation block
@property (readonly) NSString * extendedWord;              //@synthesize extendedWord=_extendedWord - In the implementation block
@property (readonly) double score;                         //@synthesize score=_score - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)word;
-(NSString *)extendedWord;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithWord:(id)arg1 extendedWord:(id)arg2 score:(double)arg3 ;
-(double)score;
-(void)encodeWithCoder:(id)arg1 ;
@end
