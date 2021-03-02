/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:55 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/DiagnosticsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol DKDiagnostic_Internal <DKDiagnostic>
@property (assign,getter=isCancelled,nonatomic) BOOL cancelled; 
@property (assign,getter=isSetup,nonatomic) BOOL setup; 
@required
-(BOOL)isSetup;
-(void)setCancelled:(BOOL)arg1;
-(BOOL)isCancelled;
-(void)setSetup:(BOOL)arg1;

@end
