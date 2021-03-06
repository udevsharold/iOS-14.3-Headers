/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:35 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_dispatch_queue, _LTTranslationService, _LTSpeechTranslationDelegate;
@class NSObject, NSArray;

@interface _LTInstallRequest : NSObject <NSSecureCoding> {

	NSObject*<OS_dispatch_queue> _queue;
	id<_LTTranslationService> _service;
	/*^block*/id _done;
	BOOL _useCellular;
	NSArray* _locales;
	id<_LTSpeechTranslationDelegate> _delegate;
	/*^block*/id _progressHandler;
	/*^block*/id _completionHandler;

}

@property (nonatomic,copy) id completionHandler;                                            //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,copy) NSArray * locales;                                               //@synthesize locales=_locales - In the implementation block
@property (assign,nonatomic) BOOL useCellular;                                              //@synthesize useCellular=_useCellular - In the implementation block
@property (assign,nonatomic,__weak) id<_LTSpeechTranslationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) id progressHandler;                                              //@synthesize progressHandler=_progressHandler - In the implementation block
+(void)initialize;
+(BOOL)supportsSecureCoding;
-(void)setProgressHandler:(id)arg1 ;
-(void)setCompletionHandler:(id)arg1 ;
-(id)completionHandler;
-(id)initWithLocales:(id)arg1 useCellular:(BOOL)arg2 ;
-(id)initWithLocales:(id)arg1 useCellular:(BOOL)arg2 progressHandler:(/*^block*/id)arg3 ;
-(id)initWithLocales:(id)arg1 useCellular:(BOOL)arg2 delegate:(id)arg3 ;
-(void)setUseCellular:(BOOL)arg1 ;
-(void)languageInstallProgressed:(id)arg1 error:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)locales;
-(id)progressHandler;
-(void)_startInstallationWithService:(id)arg1 done:(/*^block*/id)arg2 ;
-(void)setDelegate:(id<_LTSpeechTranslationDelegate>)arg1 ;
-(BOOL)useCellular;
-(id<_LTSpeechTranslationDelegate>)delegate;
-(void)setLocales:(NSArray *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

