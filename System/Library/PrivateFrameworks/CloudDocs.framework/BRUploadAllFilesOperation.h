/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:51 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocs/BROperation.h>

@class BRContainer;

@interface BRUploadAllFilesOperation : BROperation {

	/*^block*/id _uploadAllFilesCompletion;
	BRContainer* _container;

}

@property (copy) id uploadAllFilesCompletion;              //@synthesize uploadAllFilesCompletion=_uploadAllFilesCompletion - In the implementation block
-(id)init;
-(id)uploadAllFilesCompletion;
-(void)setUploadAllFilesCompletion:(id)arg1 ;
-(void)main;
-(void)finishWithResult:(id)arg1 error:(id)arg2 ;
-(id)initWithContainer:(id)arg1 ;
@end

