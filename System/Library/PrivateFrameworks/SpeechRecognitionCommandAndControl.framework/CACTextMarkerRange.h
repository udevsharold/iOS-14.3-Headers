/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:53 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SpeechRecognitionCommandAndControl/SpeechRecognitionCommandAndControl-Structs.h>
@class CACTextMarker;

@interface CACTextMarkerRange : NSObject {

	CACTextMarker* _startMarker;
	CACTextMarker* _endMarker;

}

@property (nonatomic,readonly) CACTextMarker * startMarker;              //@synthesize startMarker=_startMarker - In the implementation block
@property (nonatomic,readonly) CACTextMarker * endMarker;                //@synthesize endMarker=_endMarker - In the implementation block
+(id)markerRangeWithStartMarker:(id)arg1 endMarker:(id)arg2 ;
+(id)markerRangeWithNSRange:(NSRange)arg1 ;
+(id)markerRangeWithStartMarker:(id)arg1 endMarker:(id)arg2 forTextElement:(id)arg3 ;
+(id)markerRangeWithArray:(id)arg1 ;
-(BOOL)isEmpty;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(id)array;
-(NSRange)nsRange;
-(id)initWithStartMarker:(id)arg1 endMarker:(id)arg2 ;
-(CACTextMarker *)startMarker;
-(CACTextMarker *)endMarker;
-(BOOL)containsMarker:(id)arg1 forUIElement:(id)arg2 ;
-(BOOL)containsRange:(id)arg1 forUIElement:(id)arg2 ;
@end
