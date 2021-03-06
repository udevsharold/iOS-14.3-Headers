/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:33:08 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/VideoProcessors/MattingV2.bundle/MattingV2
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MattingV2/MattingV2-Structs.h>
@class NSDictionary, NSString;

@interface MattingV2TuningParameters : NSObject {

	NSDictionary* _tuningDictionaryForPortType;
	NSString* _portType;

}

@property (nonatomic,retain) NSString * portType;              //@synthesize portType=_portType - In the implementation block
-(NSString *)portType;
-(void)setPortType:(NSString *)arg1 ;
-(id)initWithTuningDictionary:(id)arg1 ;
-(id)initWithDefaults;
-(id)getSemanticConfigurationsFor:(id)arg1 mattingConfiguration:(SCD_Struct_Fi5)arg2 ;
-(id)parseSemanticConfiguration:(id)arg1 semanticKey:(id)arg2 mattingConfiguration:(SCD_Struct_Fi5)arg3 ;
@end

