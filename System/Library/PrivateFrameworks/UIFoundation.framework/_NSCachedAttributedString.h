/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:48 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIFoundation/UIFoundation-Structs.h>
#import <Foundation/NSMutableAttributedString.h>

@class NSAttributeDictionary;

@interface _NSCachedAttributedString : NSMutableAttributedString {

	id _contents;
	NSAttributeDictionary* _baseAttributes;
	long long _length;
	unsigned long long _hashValue;
	SCD_Struct_NS38* _runs;
	long long _numRuns;
	long long _allocedRunsSize;
	long long _numHits;

}
+(void)initialize;
+(id)allocWithZone:(NSZone*)arg1 ;
-(id)initWithString:(id)arg1 ;
-(id)attributesAtIndex:(unsigned long long)arg1 longestEffectiveRange:(NSRange*)arg2 inRange:(NSRange)arg3 ;
-(id)initWithString:(id)arg1 attributes:(id)arg2 ;
-(void)cache;
-(unsigned long long)length;
-(id)string;
-(id)init;
-(BOOL)_baselineMode;
-(void)setAttributes:(id)arg1 range:(NSRange)arg2 ;
-(id)attributesAtIndex:(unsigned long long)arg1 effectiveRange:(NSRange*)arg2 ;
-(BOOL)_isDeallocating;
-(id)initWithAttributedString:(id)arg1 ;
-(void)dealloc;
-(BOOL)_tryRetain;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(void)finalize;
-(oneway void)release;
-(BOOL)hasColorGlyphsInRange:(NSRange)arg1 ;
-(BOOL)_isStringDrawingTextStorage;
-(id)copyCachedInstance;
@end

