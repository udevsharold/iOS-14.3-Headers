/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:11 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FileProvider/FPActionOperationInfo.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class FPActionOperationLocator, NSArray;

@interface FPMoveInfo : FPActionOperationInfo <NSSecureCoding> {

	BOOL _shouldBounce;
	BOOL _byCopy;
	FPActionOperationLocator* _targetFolder;
	NSArray* _rootFilenames;
	unsigned long long _lastUsedDatePolicy;

}

@property (nonatomic,retain) FPActionOperationLocator * targetFolder;              //@synthesize targetFolder=_targetFolder - In the implementation block
@property (nonatomic,retain) NSArray * rootFilenames;                              //@synthesize rootFilenames=_rootFilenames - In the implementation block
@property (assign,nonatomic) unsigned long long lastUsedDatePolicy;                //@synthesize lastUsedDatePolicy=_lastUsedDatePolicy - In the implementation block
@property (assign,nonatomic) BOOL shouldBounce;                                    //@synthesize shouldBounce=_shouldBounce - In the implementation block
@property (assign,nonatomic) BOOL byCopy;                                          //@synthesize byCopy=_byCopy - In the implementation block
@property (nonatomic,readonly) BOOL byMoving; 
+(BOOL)supportsSecureCoding;
-(BOOL)byCopy;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)byMoving;
-(id)description;
-(void)setByCopy:(BOOL)arg1 ;
-(BOOL)shouldBounce;
-(unsigned long long)lastUsedDatePolicy;
-(void)setRootFilenames:(NSArray *)arg1 ;
-(void)setTargetFolder:(FPActionOperationLocator *)arg1 ;
-(void)setLastUsedDatePolicy:(unsigned long long)arg1 ;
-(void)setShouldBounce:(BOOL)arg1 ;
-(FPActionOperationLocator *)targetFolder;
-(NSArray *)rootFilenames;
-(id)initWithOperationID:(id)arg1 roots:(id)arg2 rootFilenames:(id)arg3 targetFolder:(id)arg4 lastUsedDatePolicy:(unsigned long long)arg5 bounce:(BOOL)arg6 byCopy:(BOOL)arg7 ;
-(void)encodeWithCoder:(id)arg1 ;
@end
