/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:26 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <EmbeddedAcousticRecognition/EmbeddedAcousticRecognition-Structs.h>
@interface _EARLmHandle : NSObject {

	shared_ptr<kaldi::quasar::LmHandle>* _handle;

}

@property (nonatomic,readonly) shared_ptr<kaldi::quasar::LmHandle>* handle;              //@synthesize handle=_handle - In the implementation block
-(shared_ptr<kaldi::quasar::LmHandle>*)handle;
-(id)_initWithHandle:(shared_ptr<kaldi::quasar::LmHandle>*)arg1 ;
@end
