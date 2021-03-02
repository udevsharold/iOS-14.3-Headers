/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:03 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HardwareDiagnostics.framework/HardwareDiagnostics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HardwareDiagnostics/HardwareDiagnostics-Structs.h>
#import <libobjc.A.dylib/HDParameterDescription.h>

@class NSString;

@interface HDNumberParameter : NSObject <HDParameterDescription> {

	BOOL _required;
	NSString* _summary;

}

@property (nonatomic,retain) NSString * summary;                    //@synthesize summary=_summary - In the implementation block
@property (assign,nonatomic) BOOL required;                         //@synthesize required=_required - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)summary;
-(id)init;
-(BOOL)validateValue:(id)arg1 error:(id*)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSummary:(NSString *)arg1 ;
-(void)setRequired:(BOOL)arg1 ;
-(BOOL)required;
-(id)initWithSummary:(id)arg1 required:(BOOL)arg2 ;
@end
