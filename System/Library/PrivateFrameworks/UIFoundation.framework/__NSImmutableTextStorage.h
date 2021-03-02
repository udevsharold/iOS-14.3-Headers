/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:47 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIFoundation/UIFoundation-Structs.h>
#import <UIFoundation/NSTextStorage.h>

@class NSAttributedString, NSLayoutManager, NSTextContainer;

@interface __NSImmutableTextStorage : NSTextStorage {

	NSAttributedString* _contents;
	NSLayoutManager* _layoutManager;
	NSTextContainer* _textContainer;

}

@property (readonly) NSLayoutManager * layoutManager; 
@property (readonly) NSTextContainer * textContainer; 
+(id)allocWithZone:(NSZone*)arg1 ;
-(id)attributesAtIndex:(unsigned long long)arg1 longestEffectiveRange:(NSRange*)arg2 inRange:(NSRange)arg3 ;
-(id)attribute:(id)arg1 atIndex:(unsigned long long)arg2 longestEffectiveRange:(NSRange*)arg3 inRange:(NSRange)arg4 ;
-(void)replaceCharactersInRange:(NSRange)arg1 withString:(id)arg2 ;
-(id)string;
-(id)attribute:(id)arg1 atIndex:(unsigned long long)arg2 effectiveRange:(NSRange*)arg3 ;
-(void)processEditing;
-(NSTextContainer *)textContainer;
-(void)setAttributes:(id)arg1 range:(NSRange)arg2 ;
-(id)attributesAtIndex:(unsigned long long)arg1 effectiveRange:(NSRange*)arg2 ;
-(NSLayoutManager *)layoutManager;
-(BOOL)_isDeallocating;
-(id)initWithAttributedString:(id)arg1 ;
-(void)dealloc;
-(BOOL)_tryRetain;
-(void)fixAttributesInRange:(NSRange)arg1 ;
-(oneway void)release;
@end
