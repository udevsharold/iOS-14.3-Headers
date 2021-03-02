/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:42 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/EmojiKit.framework/EmojiKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <EmojiKit/EmojiKit-Structs.h>
@class NSMutableDictionary;

@interface EMKTextEnumerator : NSObject {

	NSMutableDictionary* _emojiDatasByLanguage;

}
-(id)init;
-(id)emojiDataForLanguage:(id)arg1 ;
-(void)enumerateEmojiSignifiersInString:(id)arg1 touchingRange:(NSRange)arg2 language:(id)arg3 usingBlock:(/*^block*/id)arg4 ;
@end
