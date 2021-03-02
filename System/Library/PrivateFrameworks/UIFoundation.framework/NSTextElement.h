/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:47 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIFoundation/UIFoundation-Structs.h>
@class NSTextContentManager, NSTextRange;

@interface NSTextElement : NSObject {

	NSTextContentManager* _textContentManager;
	NSTextRange* _elementRange;

}

@property (__weak) NSTextContentManager * textContentManager; 
@property (retain) NSTextRange * elementRange;                             //@synthesize elementRange=_elementRange - In the implementation block
-(void)setTextContentManager:(NSTextContentManager *)arg1 ;
-(void)setElementRange:(NSTextRange *)arg1 ;
-(id)init;
-(id)initWithTextContentManager:(id)arg1 ;
-(void)dealloc;
-(NSTextRange *)elementRange;
-(NSTextContentManager *)textContentManager;
-(CGSize)estimatedIntrinsicContentSizeForTextLayoutManager:(id)arg1 ;
@end
