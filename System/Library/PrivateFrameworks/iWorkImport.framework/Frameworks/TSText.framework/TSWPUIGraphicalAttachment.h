/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:12:05 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSText.framework/TSText
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSText/TSText-Structs.h>
#import <TSReading/TSWPAttachment.h>

@interface TSWPUIGraphicalAttachment : TSWPAttachment

@property (nonatomic,readonly) CGSize size; 
@property (nonatomic,readonly) double baselineOffset; 
-(double)baselineOffset;
-(CGSize)size;
-(int)elementKind;
-(void)invalidate;
-(id)rendererForAttachment;
-(BOOL)wantsSelectionAtPoint:(CGPoint)arg1 ;
@end
