/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:15 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MDLNamed.h>

@class MDLMaterialProperty, NSString;

@interface MDLMaterialPropertyConnection : NSObject <MDLNamed> {

	MDLMaterialProperty* _input;
	MDLMaterialProperty* _output;
	NSString* _name;

}

@property (nonatomic,__weak,readonly) MDLMaterialProperty * output;              //@synthesize output=_output - In the implementation block
@property (nonatomic,__weak,readonly) MDLMaterialProperty * input;               //@synthesize input=_input - In the implementation block
@property (nonatomic,copy) NSString * name;                                      //@synthesize name=_name - In the implementation block
-(void)setName:(NSString *)arg1 ;
-(MDLMaterialProperty *)output;
-(MDLMaterialProperty *)input;
-(NSString *)name;
-(id)initWithOutput:(id)arg1 input:(id)arg2 ;
@end

