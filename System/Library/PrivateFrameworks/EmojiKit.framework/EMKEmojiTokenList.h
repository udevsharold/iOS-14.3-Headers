/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:42 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/EmojiKit.framework/EmojiKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EmojiKit/EmojiKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface EMKEmojiTokenList : NSObject <NSCopying> {

	NSArray* _emojiTokenArray;

}

@property (readonly) NSArray * emojiTokenArray; 
@property (readonly) unsigned long long count; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(unsigned long long)count;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(id)emojiTokenAtIndex:(unsigned long long)arg1 ;
-(id)initWithEmojiTokenArray:(id)arg1 ;
-(NSArray *)emojiTokenArray;
@end

