/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:28 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/DialogEngine.framework/DialogEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <DialogEngine/DialogEngine-Structs.h>
@class NSString;

@interface DEFile : NSObject {

	shared_ptr<siri::dialogengine::File>* _This;

}

@property (assign) shared_ptr<siri::dialogengine::File>* This;              //@synthesize This=_This - In the implementation block
@property (retain) NSString * paramsFilename; 
@property (retain) NSString * id; 
@property (retain) NSString * localeFilename; 
-(shared_ptr<siri::dialogengine::File>*)This;
-(id)execute:(id)arg1 ;
-(id)init;
-(NSString *)id;
-(void)setId:(NSString *)arg1 ;
-(void)addCondition:(id)arg1 ;
-(shared_ptr<siri::dialogengine::File>*)getSharedPtr;
-(void)setThis:(shared_ptr<siri::dialogengine::File>*)arg1 ;
-(id)getDialogs;
-(id)getRoot;
-(id)initWithSharedPtr:(shared_ptr<siri::dialogengine::File>*)arg1 ;
-(NSString *)paramsFilename;
-(void)setParamsFilename:(NSString *)arg1 ;
-(NSString *)localeFilename;
-(void)setLocaleFilename:(NSString *)arg1 ;
-(id)getParameters;
-(void)addPhrase:(id)arg1 ;
-(id)getValidationErrors;
-(id)getValidationWarnings;
@end
