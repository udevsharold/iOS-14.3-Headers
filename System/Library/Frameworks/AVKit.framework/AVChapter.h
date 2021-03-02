/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:17 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVKit/AVKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIImage, NSString;

@interface AVChapter : NSObject <NSCopying> {

	UIImage* _image;
	/*^block*/id _imageBlock;
	double _startTime;
	double _duration;
	unsigned long long _number;
	NSString* _title;

}

@property (readonly) double startTime;                       //@synthesize startTime=_startTime - In the implementation block
@property (readonly) double duration;                        //@synthesize duration=_duration - In the implementation block
@property (readonly) unsigned long long number;              //@synthesize number=_number - In the implementation block
@property (copy,readonly) NSString * title;                  //@synthesize title=_title - In the implementation block
@property (readonly) UIImage * image;                        //@synthesize image=_image - In the implementation block
+(void)initialize;
+(id)playbackChapterWithStartTime:(double)arg1 duration:(double)arg2 number:(unsigned long long)arg3 title:(id)arg4 imageFaultBlock:(/*^block*/id)arg5 ;
+(id)chapterAtTime:(double)arg1 inChapters:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)number;
-(UIImage *)image;
-(unsigned long long)hash;
-(id)initWithStartTime:(double)arg1 duration:(double)arg2 number:(unsigned long long)arg3 title:(id)arg4 imageFaultBlock:(/*^block*/id)arg5 ;
-(BOOL)isEqual:(id)arg1 ;
-(double)startTime;
-(double)duration;
-(NSString *)title;
@end
