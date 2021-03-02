/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:52 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/TrialProto.framework/TrialProto
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface TRIPBEnumDescriptor : NSObject {

	NSString* name_;
	const char* valueNames_;
	const int* values_;
	/*function pointer*/void* enumVerifier_;
	const char* extraTextFormatInfo_;
	unsigned* nameOffsets_;
	unsigned valueCount_;

}

@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,readonly) /*function pointer*/void* enumVerifier; 
+(id)allocDescriptorForName:(id)arg1 valueNames:(const char*)arg2 values:(const int*)arg3 count:(unsigned)arg4 enumVerifier:(/*function pointer*/void*)arg5 ;
+(id)allocDescriptorForName:(id)arg1 valueNames:(const char*)arg2 values:(const int*)arg3 count:(unsigned)arg4 enumVerifier:(/*function pointer*/void*)arg5 extraTextFormatInfo:(const char*)arg6 ;
-(/*function pointer*/void*)enumVerifier;
-(id)textFormatNameForValue:(int)arg1 ;
-(void)dealloc;
-(void)calcValueNameOffsets;
-(BOOL)getValue:(int*)arg1 forEnumName:(id)arg2 ;
-(BOOL)getValue:(int*)arg1 forEnumTextFormatName:(id)arg2 ;
-(id)enumNameForValue:(int)arg1 ;
-(NSString *)name;
-(id)initWithName:(id)arg1 valueNames:(const char*)arg2 values:(const int*)arg3 count:(unsigned)arg4 enumVerifier:(/*function pointer*/void*)arg5 ;
@end
