/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:22 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface CAMTransientImageManagerRequest : NSObject {

	BOOL _isCanceled;
	BOOL _isFinished;
	NSString* _uuid;
	/*^block*/id _resultHandler;

}

@property (nonatomic,copy) NSString * uuid;                //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,copy) id resultHandler;               //@synthesize resultHandler=_resultHandler - In the implementation block
@property (assign,nonatomic) BOOL isCanceled;              //@synthesize isCanceled=_isCanceled - In the implementation block
@property (assign,nonatomic) BOOL isFinished;              //@synthesize isFinished=_isFinished - In the implementation block
-(void)setIsFinished:(BOOL)arg1 ;
-(void)setUuid:(NSString *)arg1 ;
-(BOOL)isCanceled;
-(id)resultHandler;
-(void)setResultHandler:(id)arg1 ;
-(void)setIsCanceled:(BOOL)arg1 ;
-(BOOL)isFinished;
-(NSString *)uuid;
@end
