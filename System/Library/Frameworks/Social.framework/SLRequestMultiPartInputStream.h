/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:54 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/NSInputStream.h>

@class SLRequestMultiPart, NSData;

@interface SLRequestMultiPartInputStream : NSInputStream {

	SLRequestMultiPart* _multiPart;
	unsigned long long _streamStatus;
	unsigned long long _bytesReadInState;
	unsigned long long _totalBytesRead;
	NSData* _srcData;
	int _currentState;

}
-(unsigned long long)length;
-(long long)read:(char*)arg1 maxLength:(unsigned long long)arg2 ;
-(void)transitionState;
-(void)close;
-(void)open;
-(BOOL)hasBytesAvailable;
-(BOOL)getBuffer:(char**)arg1 length:(unsigned long long*)arg2 ;
-(unsigned long long)readStateSourceData:(id)arg1 toBuffer:(char*)arg2 offset:(unsigned long long)arg3 maxLength:(unsigned long long)arg4 ;
-(long long)currentStateRead:(char*)arg1 maxLength:(unsigned long long)arg2 ;
-(id)initWithMultiPart:(id)arg1 ;
@end

