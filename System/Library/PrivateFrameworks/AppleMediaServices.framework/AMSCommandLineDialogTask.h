/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:58 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleMediaServices/AMSTask.h>

@class AMSDialogRequest;

@interface AMSCommandLineDialogTask : AMSTask {

	AMSDialogRequest* _request;
	double _maximumDialogWidth;
	double _minimumDialogWidth;
	double _dialogPadding;
	long long _automaticButtonSelection;

}

@property (nonatomic,readonly) AMSDialogRequest * request;                    //@synthesize request=_request - In the implementation block
@property (assign,nonatomic) double maximumDialogWidth;                       //@synthesize maximumDialogWidth=_maximumDialogWidth - In the implementation block
@property (assign,nonatomic) double minimumDialogWidth;                       //@synthesize minimumDialogWidth=_minimumDialogWidth - In the implementation block
@property (assign,nonatomic) double dialogPadding;                            //@synthesize dialogPadding=_dialogPadding - In the implementation block
@property (assign,nonatomic) long long automaticButtonSelection;              //@synthesize automaticButtonSelection=_automaticButtonSelection - In the implementation block
-(id)initWithRequest:(id)arg1 ;
-(id)present;
-(AMSDialogRequest *)request;
-(void)_printMessage:(id)arg1 ;
-(double)dialogPadding;
-(double)minimumDialogWidth;
-(double)maximumDialogWidth;
-(id)_createHorizontolLineWithWidth:(long long)arg1 ;
-(id)_createLinesFromText:(id)arg1 width:(long long)arg2 ;
-(id)_createText:(id)arg1 width:(long long)arg2 centered:(BOOL)arg3 omitLeftPipe:(BOOL)arg4 ;
-(id)_createTextfieldWithTextfield:(id)arg1 width:(long long)arg2 ;
-(id)_gatherTextfieldInput;
-(long long)automaticButtonSelection;
-(long long)_gatherButtonInput;
-(id)_getUserInput;
-(void)setMaximumDialogWidth:(double)arg1 ;
-(void)setMinimumDialogWidth:(double)arg1 ;
-(void)setDialogPadding:(double)arg1 ;
-(void)setAutomaticButtonSelection:(long long)arg1 ;
@end
