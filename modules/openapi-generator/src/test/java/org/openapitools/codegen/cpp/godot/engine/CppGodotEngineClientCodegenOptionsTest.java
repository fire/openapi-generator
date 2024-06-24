package org.openapitools.codegen.cpp.godot.engine;

import org.openapitools.codegen.AbstractOptionsTest;
import org.openapitools.codegen.CodegenConfig;
import org.openapitools.codegen.languages.CppGodotEngineClientCodegen;
import org.openapitools.codegen.options.CppGodotEngineClientCodegenOptionsProvider;

import static org.mockito.Mockito.mock;
import static org.mockito.Mockito.verify;

public class CppGodotEngineClientCodegenOptionsTest extends AbstractOptionsTest {
    private CppGodotEngineClientCodegen codegen = mock(CppGodotEngineClientCodegen.class, mockSettings);

    public CppGodotEngineClientCodegenOptionsTest() {
        super(new CppGodotEngineClientCodegenOptionsProvider());
    }

    @Override
    protected CodegenConfig getCodegenConfig() {
        return codegen;
    }

    @SuppressWarnings("unused")
    @Override
    protected void verifyOptions() {
        // TODO: Complete options using Mockito
        // verify(codegen).someMethod(arguments)
    }
}

