/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:00 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DAEAS/ASWBXMLToXMLConverter.h>

@interface ASFileDescriptorWBXMLToXMLConverter : ASWBXMLToXMLConverter {

	int _input;
	int _output;

}

@property (assign,nonatomic) int input;               //@synthesize input=_input - In the implementation block
@property (assign,nonatomic) int output;              //@synthesize output=_output - In the implementation block
-(int)output;
-(int)input;
-(void)setInput:(int)arg1 ;
-(BOOL)runSynchronously;
-(void)setOutput:(int)arg1 ;
-(void)outputString:(id)arg1 ;
-(void)outputData:(id)arg1 ;
-(long long)readFromInput;
-(id)initWithInputFD:(int)arg1 outputFD:(int)arg2 usingMetadata:(BOOL)arg3 ;
@end

