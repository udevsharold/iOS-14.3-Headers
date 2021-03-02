/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:14 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <Foundation/NSOperation.h>

@class NSString, UIImage;

@interface WKQLThumbnailLoadOperation : NSOperation {

	RetainPtr<NSURL>* _filePath;
	RetainPtr<NSString>* _identifier;
	RetainPtr<NSFileWrapper>* _fileWrapper;
	RetainPtr<UIImage>* _thumbnail;
	BOOL _shouldWrite;
	BOOL _executing;
	BOOL _finished;

}

@property (getter=isExecuting) BOOL executing;                             //@synthesize executing=_executing - In the implementation block
@property (getter=isFinished) BOOL finished;                               //@synthesize finished=_finished - In the implementation block
@property (getter=isAsynchronous,readonly) BOOL asynchronous; 
@property (nonatomic,copy,readonly) NSString * identifier; 
@property (nonatomic,retain,readonly) UIImage * thumbnail; 
-(void)setFinished:(BOOL)arg1 ;
-(BOOL)isExecuting;
-(UIImage *)thumbnail;
-(id)initWithAttachment:(id)arg1 identifier:(id)arg2 ;
-(id)initWithURL:(id)arg1 identifier:(id)arg2 ;
-(BOOL)isFinished;
-(void)setExecuting:(BOOL)arg1 ;
-(BOOL)isAsynchronous;
-(NSString *)identifier;
-(void)start;
@end
