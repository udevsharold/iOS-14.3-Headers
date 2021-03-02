/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:05 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VoiceMemos/VoiceMemos-Structs.h>
#import <CoreFoundation/NSData.h>

@interface RCAudioFileData : NSData {

	OpaqueAudioFileIDRef _audioFile;
	unsigned long long _audioFileSize;

}
+(id)audioFileDataWithURL:(id)arg1 error:(id*)arg2 ;
-(void)dealloc;
-(id)_initWithURL:(id)arg1 error:(id*)arg2 ;
-(void)enumerateByteRangesUsingBlock:(/*^block*/id)arg1 ;
@end
