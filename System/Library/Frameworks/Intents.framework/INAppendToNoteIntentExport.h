/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:42 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class INNote, INNoteContent;


@protocol INAppendToNoteIntentExport <NSObject,JSExport>
@property (nonatomic,copy) INNote * targetNote; 
@property (nonatomic,copy) INNoteContent * content; 
@required
-(INNoteContent *)content;
-(void)setContent:(id)arg1;
-(id)init;
-(INNote *)targetNote;
-(void)setTargetNote:(id)arg1;

@end
