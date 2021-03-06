/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:54 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PencilKit/PKTextInputDebugLogEntry.h>

@class NSDictionary;

@interface PKTextInputDebugArchivedLogEntry : PKTextInputDebugLogEntry {

	NSDictionary* _logDictionary;

}
-(id)initWithDictionary:(id)arg1 error:(id*)arg2 ;
-(id)initWithRecordingLogEntry:(id)arg1 error:(id*)arg2 ;
-(id)dictionaryRepresentationWithDetailLevel:(long long)arg1 targetContentLevel:(long long)arg2 ;
-(BOOL)_loadInputDrawingFromDictionary:(id)arg1 errorMessage:(id*)arg2 ;
-(BOOL)_loadTextInputTargetsFromDictionaries:(id)arg1 ;
-(BOOL)_loadTargetContentInfoFromDictionary:(id)arg1 targets:(id)arg2 ;
-(BOOL)_loadRecognitionResultFromDictionary:(id)arg1 ;
@end

