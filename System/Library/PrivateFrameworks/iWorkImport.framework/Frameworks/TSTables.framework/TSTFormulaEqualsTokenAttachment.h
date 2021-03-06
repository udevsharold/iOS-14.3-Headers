/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:12:04 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSTables.framework/TSTables
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSTables/TSTables-Structs.h>
#import <TSReading/TSWPUIGraphicalAttachment.h>

@interface TSTFormulaEqualsTokenAttachment : TSWPUIGraphicalAttachment
-(double)baselineOffset;
-(CGSize)size;
-(id)description;
-(id)rendererForAttachment;
-(BOOL)wantsSelectionAtPoint:(CGPoint)arg1 ;
-(void)loadFromArchive:(const FormulaEqualsTokenAttachmentArchive*)arg1 unarchiver:(id)arg2 ;
-(void)saveToArchive:(FormulaEqualsTokenAttachmentArchive*)arg1 archiver:(id)arg2 ;
-(void)loadFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
@end

