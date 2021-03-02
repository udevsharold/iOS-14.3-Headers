/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:51 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIUndoTextOperation.h>

@class NSMutableAttributedString;

@interface _UITextUndoOperationTyping : _UIUndoTextOperation {

	NSRange _replacementRange;
	NSMutableAttributedString* _attributedString;

}
-(void)undoRedo;
-(id)initWithAffectedRange:(NSRange)arg1 inputController:(id)arg2 replacementRange:(NSRange)arg3 ;
-(BOOL)supportsCoalescing;
-(BOOL)coalesceAffectedRange:(NSRange)arg1 replacementRange:(NSRange)arg2 selectedRange:(NSRange)arg3 textStorage:(id)arg4 ;
@end
